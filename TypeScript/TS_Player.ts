import * as UE from  'ue'
import TS_Bullet from "./TS_Bullet";
import TS_Enemy from "./TS_Enemy";
import TS_LevelMap from "./TS_LevelMap";
import {
    $ref,
    $unref,
    $set,
    argv,
    on,
    toManualReleaseDelegate,
    releaseManualReleaseDelegate,
    blueprint,
    $Nullable,
} from 'puerts';

let ucls = UE.Class.Load('/Game/ThirdPersonCPP/Blueprints/BulletPrefab.BulletPrefab_C');
const BulletMixin = blueprint.tojs<typeof UE.Game.ThirdPersonCPP.Blueprints.BulletPrefab.BulletPrefab_C>(ucls);
const TSBulletWithMixin = blueprint.mixin(BulletMixin, TS_Bullet);

// let ucls2 = UE.Class.Load('/Game/ThirdPersonCPP/Blueprints/EnemySpawner.EnemySpawner_C');
// const EnemySpawnerMixin = blueprint.tojs<typeof UE.Game.ThirdPersonCPP.Blueprints.EnemySpawner.EnemySpawner_C>(ucls2);
// const TSLevelMapWithMixin = blueprint.mixin(EnemySpawnerMixin, TS_LevelMap);

class TS_Player extends UE.unreal_puertsCharacter {
    // console.log("lr debug: constructor");
    barrageRow: number;
    barrageCol: number;
    angleRowOffset: number;
    angleColOffset: number;
    health: number;
    // canShoot = false;
    world: UE.World;
    timer: UE.TimerHandle;

    ReceiveBeginPlay(): void {
        console.log("lr debug: ReceiveBeginPlay");
        this.world = this.GetWorld();
        this.barrageRow = 3;
        this.barrageCol = 6;
        this.angleRowOffset = 1;
        this.angleColOffset = 1.5;
        this.health = 1;
        this.OnActorBeginOverlap.Add(this.HandleActorBeginOverlap.bind(this));
        this.timer = UE.KismetSystemLibrary.K2_SetTimer(this, "TSShoot", 0.1, true, 0, 0);
        UE.KismetSystemLibrary.K2_PauseTimerHandle(this, this.timer);
        let ucls2 = UE.Class.Load('/Game/ThirdPersonCPP/Blueprints/EnemySpawner.EnemySpawner_C');
        let EnemySpawnerMixin = blueprint.tojs<typeof UE.Game.ThirdPersonCPP.Blueprints.EnemySpawner.EnemySpawner_C>(ucls2);
        let TSLevelMapWithMixin = blueprint.mixin(EnemySpawnerMixin, TS_LevelMap);
        let levelMap = UE.GameplayStatics.BeginDeferredActorSpawnFromClass(this.world, TSLevelMapWithMixin.StaticClass(), undefined, UE.ESpawnActorCollisionHandlingMethod.AlwaysSpawn) as UE.Game.ThirdPersonCPP.Blueprints.EnemySpawner.EnemySpawner_C;
        UE.GameplayStatics.FinishSpawningActor(levelMap, undefined);
        // console.log("lr debug: player health begin", this.health);
        // this.OnClicked.Add(this.FireClicked);
        // console.log("lr debug: ReceiveBeginPlay Finished", this.GetClass().GetName());
    }

    Fire(axisValue: number) {
        // console.log("lr debug: ReceiveActorOnClicked");
        if (axisValue == 1) {
            // console.log("lr debug: ReceiveActorOnClicked LeftMouseButton");
            // this.canShoot = true;
            // this.TSShoot();
            UE.KismetSystemLibrary.K2_UnPauseTimerHandle(this, this.timer);
        }
        else {
            // console.log("lr debug: ReceiveActorOnReleased LeftMouseButton");
            UE.KismetSystemLibrary.K2_PauseTimerHandle(this, this.timer);
        }
    }


    TSShoot(): void {
        // console.log("lr debug: BulletSpawn");
        let playerLocation = this.K2_GetActorLocation();
        let playerRotation = this.K2_GetActorRotation();
        // let ucls = UE.Class.Load('/Game/ThirdPersonCPP/Blueprints/BulletPrefab.BulletPrefab_C');
        // const BulletMixin = blueprint.tojs<typeof UE.Game.ThirdPersonCPP.Blueprints.BulletPrefab.BulletPrefab_C>(ucls);
        // const TSBulletWithMixin = blueprint.mixin(BulletMixin, TS_Bullet);
        let spawnLocOffset =new UE.Vector(-30, 10, 30);
        let spawnLoc = playerLocation.op_Addition(spawnLocOffset);
        // let bulletTrans = UE.KismetMathLibrary.Conv_VectorToTransform(spawnLoc);
        // console.log("lr debug: spawn location ", spawnLoc.ToString());
        // console.log("lr debug: player rotation ", playerRotation.ToString());
        // console.log("lr debug: player health", this.angleRowOffset);
        for (let i = -this.barrageRow; i <= this.barrageRow; ++i) {
            // console.log("lr debug: Bullet ", i);
            for (let j = -this.barrageCol; j <= this.barrageCol; ++j) {
                // console.log("lr debug: Bullet ", j);
                // let spawnRotation = playerRotation.Add(i * this.angleRowOffset, j * this.angleColOffset, 0);
                let spawnRotation = UE.KismetMathLibrary.ComposeRotators(new UE.Rotator(i * this.angleRowOffset, j * this.angleColOffset, 0), playerRotation)
                let bulletSpeed = UE.KismetMathLibrary.Conv_RotatorToVector(spawnRotation);
                let bulletTrans = new UE.Transform;
                bulletTrans.SetRotation(playerRotation.Quaternion());
                bulletTrans.SetScale3D(new UE.Vector(1, 1, 1));
                bulletTrans.SetLocation(spawnLoc);
                let bullet = UE.GameplayStatics.BeginDeferredActorSpawnFromClass(this.world, TSBulletWithMixin.StaticClass(), bulletTrans, UE.ESpawnActorCollisionHandlingMethod.AlwaysSpawn) as TS_Bullet;
                // bullet.bulletSpeed = bulletSpeed.op_Multiply(1600);

                // bullet.K2_SetActorLocation(spawnLoc, false, undefined, true);
                UE.GameplayStatics.FinishSpawningActor(bullet, bulletTrans);
                bullet.Speed = UE.KismetMathLibrary.Multiply_VectorFloat(bulletSpeed, 1000);
                // bullet.bulletSpeed = UE.KismetMathLibrary.Multiply_VectorFloat(bulletSpeed, 1000);
                // bullet.K2_SetActorLocation(spawnLoc, false, null, false);
                // bullet.K2_SetActorRotation(playerRotation, false);
                // console.log("lr debug: bullet speed ", bullet.Speed.ToString());
                // console.log("lr debug: player overlap ", this.o);
            }
        }
    }

    HandleActorBeginOverlap(OverlappedActor: $Nullable<UE.Actor>, OtherActor: $Nullable<UE.Actor>) {
        // console.log("lr debug: Overlapped actor class ", OverlappedActor.GetClass().GetName());
        // console.log("lr debug: Other actor class ", OtherActor.GetClass().GetName());
        if (OtherActor.GetClass().GetName() == "EnermyPrefab_C") {
            console.log("lr debug: ReceiveActorBeginOverlap");
            this.health--;
            // console.log("lr debug: player health", this.health);
            if (this.health <= 0) {
                this.K2_DestroyActor();
                // console.log("lr debug: player destroy");
            }
        }
    }
}

export default TS_Player;