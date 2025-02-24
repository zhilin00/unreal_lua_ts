"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const UE = require("ue");
const puerts_1 = require("puerts");
const TS_Enemy_1 = require("./TS_Enemy");
let ucls3 = UE.Class.Load('/Game/ThirdPersonCPP/Blueprints/EnermyPrefab.EnermyPrefab_C');
const EnemyMixin = puerts_1.blueprint.tojs(ucls3);
const TSEnemyWithMixin = puerts_1.blueprint.mixin(EnemyMixin, TS_Enemy_1.default);
;
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
    ReceiveActorBeginOverlap(OtherActor) {
    }
}
exports.default = TS_LevelMap;
//# sourceMappingURL=TS_LevelMap.js.map