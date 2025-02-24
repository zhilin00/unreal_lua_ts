import * as UE from 'ue'
import {$Nullable, blueprint} from "puerts";

// let ucls = UE.Class.Load('/Game/ThirdPersonCPP/Blueprints/BulletPrefab.BulletPrefab_C');
// const BulletMixin = blueprint.tojs<typeof UE.Game.ThirdPersonCPP.Blueprints.BulletPrefab.BulletPrefab_C>(ucls);

interface TS_Bullet extends UE.Game.ThirdPersonCPP.Blueprints.BulletPrefab.BulletPrefab_C {};

class TS_Bullet {
    // bulletSpeed: UE.Vector;

    ReceiveBeginPlay() {
        // this.SetActorScale3D(new UE.Vector(1, 0.06, 0.06));
        // this.CreateDefaultSubobject()
        // console.log("lr debug: bullet begin");
        // this.staticMesh = this.AddComponentByClass(UE.StaticMeshComponent.StaticClass(), false, new UE.Transform(), true) as UE.StaticMeshComponent;
        // this.staticMesh.SetStaticMesh(new UE.StaticMesh(this, "MaterialSphere"));
        this.SetLifeSpan(1);
    }

    ReceiveTick(DeltaSeconds: number) {
        if (this.isDead) {
            this.K2_DestroyActor();
        }
        else {
            // console.log("lr debug: bullet tick");
            // console.log("lr debug: bullet class", this.GetClass().GetName());
            let deltaLocation = UE.KismetMathLibrary.Multiply_VectorFloat(this.Speed, DeltaSeconds);
            let lastLocation = this.K2_GetActorLocation();
            let newLocation = UE.KismetMathLibrary.Add_VectorVector(lastLocation, deltaLocation);
            this.K2_SetActorLocation(newLocation, false, null, false);
            // console.log("lr debug: Bullet last location: ", lastLocation.ToString());
            // console.log("lr debug: Bullet new location: ", newLocation.ToString());
            // console.log("lr debug: Bullet speed: ", this.Speed.ToString());
        }
    }

    ReceiveActorBeginOverlap(OtherActor: $Nullable<UE.Actor>) {
        if (OtherActor.GetClass().GetName() == "EnermyPrefab_C") {
            // console.log("lr debug: enemy got shot");
            this.isDead = true;
        }
    }
}

export default TS_Bullet;