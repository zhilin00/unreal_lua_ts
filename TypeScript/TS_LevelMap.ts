import * as UE from 'ue'
import {$Nullable, blueprint} from "puerts";
import TS_Enemy from "./TS_Enemy";

let ucls3 = UE.Class.Load('/Game/ThirdPersonCPP/Blueprints/EnermyPrefab.EnermyPrefab_C');
const EnemyMixin = blueprint.tojs<typeof UE.Game.ThirdPersonCPP.Blueprints.EnermyPrefab.EnermyPrefab_C>(ucls3);
const TSEnemyWithMixin = blueprint.mixin(EnemyMixin, TS_Enemy);

interface TS_LevelMap extends UE.Game.ThirdPersonCPP.Blueprints.EnemySpawner.EnemySpawner_C {};

class TS_LevelMap {

    // SpawnCnt: number;
    // SpawnNum: number;
    // SpawnTimer: number;
    // SpawnInterval: number;



    // ReceiveBeginPlay() {
    //
    // }

    ReceiveTick(DeltaSeconds) {
        // console.log("lr debug: level map tick");
        if (this.SpawnTimer >= this.SpawnInterval) {
            // console.log("lr debug: level map tick");
            let origin = new UE.Vector(-5000, -5000, 100);
            let boxExtent = new UE.Vector(5000, 5000, 200);
            for (let i = 0; i < this.SpawnNum; i++) {
                let randomPoint = UE.KismetMathLibrary.RandomPointInBoundingBox(origin, boxExtent);
                let world = this.GetWorld();
                let newTransform = new UE.Transform;
                newTransform.SetLocation(randomPoint);
                newTransform.SetRotation(new UE.Quat(0, 0, 0, 1));
                newTransform.SetScale3D(new UE.Vector(1, 1, 1));
                // console.log("lr debug: enemy transform ", UE.KismetMathLibrary.Conv_VectorToTransform(randomPoint).ToString());
                let enemy = UE.GameplayStatics.BeginDeferredActorSpawnFromClass(world, TSEnemyWithMixin.StaticClass(), newTransform, UE.ESpawnActorCollisionHandlingMethod.AlwaysSpawn);
                UE.GameplayStatics.FinishSpawningActor(enemy, newTransform);
            }
            this.SpawnTimer = 0;
        }
        else {
            this.SpawnTimer += DeltaSeconds;
        }
    }

    ReceiveActorBeginOverlap(OtherActor: $Nullable<UE.Actor>) {

    }
}

export default TS_LevelMap;