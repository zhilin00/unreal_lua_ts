"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const UE = require("ue");
const TS_Player_1 = require("./TS_Player");
const puerts_1 = require("puerts");
;
class TS_Enemy {
    ReceiveTick(DeltaSeconds) {
        if (this.isDead) {
            this.K2_DestroyActor();
        }
        else {
            let actors = UE.NewArray(TS_Player_1.default);
            // console.log('lr debug: tick');
            UE.GameplayStatics.GetAllActorsOfClass(this.GetWorld(), TS_Player_1.default.StaticClass(), (0, puerts_1.$ref)(actors));
            for (let actor of actors) {
                let actorLocation = actor.K2_GetActorLocation();
                let selfLocation = this.K2_GetActorLocation();
                let normalLocation = UE.KismetMathLibrary.Normal(UE.KismetMathLibrary.Subtract_VectorVector(actorLocation, selfLocation), 0.0001);
                let newLocation = UE.KismetMathLibrary.Add_VectorVector(selfLocation, UE.KismetMathLibrary.Multiply_VectorFloat(normalLocation, DeltaSeconds * this.EnermyAttackSpeed));
                this.K2_SetActorLocation(newLocation, false, null, false);
            }
        }
    }
    ReceiveActorBeginOverlap(OtherActor) {
        if (OtherActor.GetClass().GetName() == "BulletPrefab_C") {
            this.isDead = true;
        }
        // else if (OtherActor.GetClass().GetName() == "TS_Player_C") {
        //     console.log('lr debug: player dead');
        //     OtherActor.K2_DestroyActor();
        // }
    }
}
exports.default = TS_Enemy;
//# sourceMappingURL=TS_Enemy.js.map