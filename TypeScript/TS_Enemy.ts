import * as UE from 'ue'
import TS_Player from "./TS_Player";
import {$Nullable, $ref} from "puerts";
import TS_Bullet from "./TS_Bullet";

interface TS_Enemy extends UE.Game.ThirdPersonCPP.Blueprints.EnermyPrefab.EnermyPrefab_C {};

class TS_Enemy {

    ReceiveTick(DeltaSeconds: number) {
        if (this.isDead) {
            this.K2_DestroyActor();
        }
        else {
            let actors = UE.NewArray(TS_Player);
            // console.log('lr debug: tick');
            UE.GameplayStatics.GetAllActorsOfClass(this.GetWorld(), TS_Player.StaticClass(), $ref(actors));
            for (let actor of actors) {
                let actorLocation = actor.K2_GetActorLocation();
                let selfLocation = this.K2_GetActorLocation();
                let normalLocation = UE.KismetMathLibrary.Normal(UE.KismetMathLibrary.Subtract_VectorVector(actorLocation, selfLocation), 0.0001);
                let newLocation = UE.KismetMathLibrary.Add_VectorVector(selfLocation, UE.KismetMathLibrary.Multiply_VectorFloat(normalLocation, DeltaSeconds * this.EnermyAttackSpeed));
                this.K2_SetActorLocation(newLocation, false, null, false);
            }
        }
    }

    ReceiveActorBeginOverlap(OtherActor: $Nullable<UE.Actor>) {
        if (OtherActor.GetClass().GetName() == "BulletPrefab_C") {
            this.isDead = true;
        }
        // else if (OtherActor.GetClass().GetName() == "TS_Player_C") {
        //     console.log('lr debug: player dead');
        //     OtherActor.K2_DestroyActor();
        // }
    }


}

export default TS_Enemy;