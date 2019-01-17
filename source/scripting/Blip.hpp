#pragma once

#include "Vector3.hpp"
#include "Interface.hpp"

namespace GTA
{
	public enum class BlipColor
	{
		White = 0,
		Red = 1,
		Green = 2,
		Blue = 3,
		Yellow = 66,
	};
	public enum class BlipSprite
	{
		Standard = 1,
		BigBlip = 2,
		PoliceOfficer = 3,
		PoliceArea = 4,
		Square = 5,
		Player = 6,
		North = 7,
		Waypoint = 8,
		BigCircle = 9,
		BigCircleOutline = 10,
		ArrowUpOutlined = 11,
		ArrowDownOutlined = 12,
		ArrowUp = 13,
		ArrowDown = 14,
		PoliceHelicopterAnimated = 15,
		Jet = 16,
		Number1 = 17,
		Number2 = 18,
		Number3 = 19,
		Number4 = 20,
		Number5 = 21,
		Number6 = 22,
		Number7 = 23,
		Number8 = 24,
		Number9 = 25,
		Number10 = 26,
		GTAOCrew = 27,
		GTAOFriendly = 28,
		Lift = 36,
		RaceFinish = 38,
		Safehouse = 40,
		PoliceOfficer2 = 41,
		PoliceCarDot = 42,
		PoliceHelicopter = 43,
		ChatBubble = 47,
		Garage2 = 50,
		Drugs = 51,
		Store = 52,
		PoliceCar = 56,
		PolicePlayer = 57,
		PolicePlayer = 58,
		HeistStore = 59,
		PoliceStation = 60,
		Hospital = 61,
		Helicopter = 64,
		StrangersAndFreaks = 65,
		ArmoredTruck = 66,
		TowTruck = 68,
		Barber = 71,
		LosSantosCustoms = 72,
		Clothes = 73,
		TattooParlor = 75,
		Simeon = 76,
		Lester = 77,
		Michael = 78,
		Trevor = 79,
		TheJewelStoreJob = 80,
		Rampage = 84,
		VinewoodTours = 85,
		Lamar = 86,
		Franklin = 88,
		Chinese = 89,
		Airport = 90,
		Bar = 93,
		BaseJump = 94,
		BiolabHeist = 96,
		CarWash = 100,
		ComedyClub = 102,
		Dart = 103,
		ThePortOfLSHeist = 104,
		TheBureauRaid = 105,
		FIB = 106,
		DollarSign = 108,
		Golf = 109,
		AmmuNation = 110,
		Exile = 112,
		TheSharmootaJob = 113,
		ThePaletoScore = 118,
		ShootingRange = 119,
		Solomon = 120,
		StripClub = 121,
		Tennis = 122,
		Exile2 = 123,
		Michael2 = 124,
		Triathlon = 126,
		OffRoadRaceFinish = 127,
		GangPolice = 128,
		GangMexicans = 129,
		GangBikers = 130,
		Snitch2 = 133,
		Key = 134,
		MovieTheater = 135,
		Music = 136,
		PoliceStation2 = 137,
		Marijuana = 140,
		Hunting = 141,
		Objective2 = 143,
		ArmsTraffickingGround = 147,
		Nigel = 149,
		AssaultRifle = 150,
		Bat = 151,
		Grenade = 152,
		Health = 153,
		Knife = 154,
		Molotov = 155,
		Pistol = 156,
		RPG = 157,
		Shotgun = 158,
		SMG = 159,
		Sniper = 160,
		SonicWave = 161,
		PointOfInterest = 162,
		GTAOPassive = 163,
		GTAOUsingMenu = 164,
		Link = 171,
		Minigun = 173,
		GrenadeLauncher = 174,
		Armor = 175,
		Castle = 176,
		CriminalSnitchMexican = 177,
		CriminalSnitchLost = 178,
		PropertyBikers = 181,
		PropertyPolice = 182,
		PropertyVagos = 183,
		Camera = 184,
		PlayerPositon = 185,
		BikerHandcuffKeys = 186,
		VagosHandcuffKeys = 187,
		Handcuffs = 188,
		VagosHandcuffsClosed = 189,
		Yoga = 197,
		Cab = 198,
		Number11 = 199,
		Number12 = 200,
		Number13 = 201,
		Number14 = 202,
		Number15 = 203,
		Number16 = 204,
		Shrink = 205,
		Epsilon = 206,
		DevinDollarSign2 = 207,
		Trevor2 = 208,
		Trevor3 = 209,
		Franklin2 = 210,
		Franklin3 = 211,
		FranklinC = 214,
		PersonalVehicleCar = 225,
		PersonalVehicleBike = 226,
		GangVehiclePolice = 227,
		GangPoliceHighlight = 233,
		Custody = 237,
		CustodyVagos = 238,
		ArmsTraffickingAir = 251,
		PlayerstateArrested = 252,
		PlayerstateCustody = 253,
		PlayerstateKeyholder = 255,
		PlayerstatePartner = 256,
		Fairground = 266,
		PropertyManagement = 267,
		GangHighlight = 268,
		Altruist = 269,
		Enemy = 270,
		OnMission = 271,
		CashPickup = 272,
		Chop = 273,
		Dead = 274,
		CashPickupLost = 276,
		CashPickupVagos = 277,
		CashPickupPolice = 278,
		Hooker = 279,
		Friend = 280,
		CustodyDropoff = 285,
		OnMissionPolice = 286,
		OnMissionLost = 287,
		OnMissionVagos = 288,
		CriminalCarstealPolice = 289,
		CriminalCarstealLost = 290,
		CriminalCarstealVagos = 291,
		SimeonFamily = 293,
		BountyHit = 303,
		GTAOMission = 304,
		GTAOSurvival = 305,
		CrateDrop = 306,
		PlaneDrop = 307,
		Sub = 308,
		Race = 309,
		Deathmatch = 310,
		ArmWrestling = 311,
		AmmuNationShootingRange = 313,
		RaceAir = 314,
		RaceCar = 315,
		RaceSea = 316,
		TowTruck = 317,
		GarbageTruck = 318,
		GetawayCar = 326,
		GangBike = 348,
		SafehouseForSale = 350,
		Package = 351,
		MartinMadrazo = 352,
		EnemyHelicopter = 353,
		Boost = 354,
		Devin = 355,
		Marina = 356,
		Garage = 357,
		GolfFlag = 358,
		Hangar = 359,
		Helipad = 360,
		JerryCan = 361,
		Masks = 362,
		HeistSetup = 363,
		Incapacitated = 364,
		PickupSpawn = 365,
		BoilerSuit = 366,
		Completed = 367,
		Rockets = 368,
		GarageForSale = 369,
		HelipadForSale = 370,
		MarinaForSale = 371,
		HangarForSale = 372,
		Business = 374,
		BusinessForSale = 375,
		RaceBike = 376,
		Parachute = 377,
		TeamDeathmatch = 378,
		RaceFoot = 379,
		VehicleDeathmatch = 380,
		Barry = 381,
		Dom = 382,
		MaryAnn = 383,
		Cletus = 384,
		Josh = 385,
		Minute = 386,
		Omega = 387,
		Tonya = 388,
		Paparazzo = 389,
		Crosshair = 390,
		Creator = 398,
		CreatorDirection = 399,
		Abigail = 400,
		Blimp = 401,
		Repair = 402,
		Testosterone = 403,
		Dinghy = 404,
		Fanatic = 405,
		Information = 407,
		CaptureBriefcase = 408,
		LastTeamStanding = 409,
		Boat = 410,
		CaptureHouse = 411,
		JerryCan2 = 415,
		RP = 416,
		GTAOPlayerSafehouse = 417,
		GTAOPlayerSafehouseDead = 418,
		CaptureAmericanFlag = 419,
		CaptureFlag = 420,
		Tank = 421,
		HelicopterAnimated = 422,
		Plane = 423,
		PlayerNoColor = 425,
		GunCar = 426,
		Speedboat = 427,
		Heist = 428,
		Stopwatch = 430,
		DollarSignCircled = 431,
		Crosshair2 = 432,
		DollarSignSquared = 434,
		StuntRace = 435,
		HotProperty,
		KillListCompetitive,
		King = 439,
		DeadDrop,
		PennedIn,
		Beast,
		CrossTheLinePointer,
		CrossTheLine,
		LamarD,
		Bennys,
		LamarDNumber1,
		LamarDNumber2,
		LamarDNumber3,
		LamarDNumber4,
		LamarDNumber5,
		LamarDNumber6,
		LamarDNumber7,
		LamarDNumber8,
		Yacht,
		FindersKeepers,
		Briefcase2,
		ExecutiveSearch,
		Wifi,
		TurretedLimo,
		AssetRecovery,
		YachtLocation,
		Beasted,
		Loading,
		Random,
		SlowTime,
		Flip,
		ThermalVision,
		Doped,
		Railgun,
		Seashark,
		Blind,
		Warehouse,
		WarehouseForSale,
		Office,
		OfficeForSale,
		Truck,
		SpecialCargo,
		Trailer,
		VIP,
		Cargobob,
		AreaCutline,
		Jammed,
		Ghost,
		Detonator,
		Bomb,
		Shield,
		Stunt,
		Heart,
		StuntPremium,
		Adversary,
		BikerClubhouse,
		CagedIn,
		TurfWar,
		Joust,
		Weed,
		Cocaine,
		IdentityCard,
		Meth,
		DollarBill,
		Package2,
		Capture1,
		Capture2,
		Capture3,
		Capture4,
		Capture5,
		Capture6,
		Capture7,
		Capture8,
		Capture9,
		Capture10,
		QuadBike,
		Bus,
		DrugPackage,
		Hop,
		Adversary4,
		Adversary8,
		Adversary10,
		Adversary12,
		Adversary16,
		Laptop,
		Motorcycle,
		SportsCar,
		VehicleWarehouse,
		Document,
		PoliceStationInverted,
		Junkyard,
		PhantomWedge,
		ArmoredBoxville,
		Ruiner2000,
		RampBuggy,
		Wastelander,
		RocketVoltic,
		TechnicalAqua,
		TargetA,
		TargetB,
		TargetC,
		TargetD,
		TargetE,
		TargetF,
		TargetG,
		TargetH,
		Juggernaut,
		SteeringWheel = 545,
		Cup,
		RocketBoost,
		Rocket,
		MachineGun,
		Parachute2,
		FiveSeconds,
		TenSeconds,
		FifteenSeconds,
		TwentySeconds,
		ThirtySeconds,
		WeaponSupplies,
		Bunker,
		APC,
		Oppressor,
		HalfTrack,
		DuneFAV,
		WeaponizedTampa,
		WeaponizedTrailer,
		MobileOperationsCenter,
		AdversaryBunker,
		BunkerVehicleWorkshop,
		WeaponWorkshop,
		Cargo,
		GTAOHangar,
		TransformCheckpoint,
		TransformRace,
		AlphaZ1,
		Bombushka,
		Havok,
		HowardNX25,
		Hunter,
		Ultralight,
		Mogul,
		V65Molotok,
		P45Nokota,
		Pyro,
		Rogue,
		Starling,
		Seabreeze,
		Tula,
		Equipment,
		Treasure,
		OrbitalCannon,
		Avenger,
		Facility,
		HeistDoomsday,
		SAMTurret,
		Firewall,
		Node,
		Stromberg,
		Deluxo,
		Thruster,
		Khanjali,
		RCV,
		Volatol,
		Barrage,
		Akula,
		Chernobog,
		CCTV,
		StarterPackIdentifier,
		TurretStation,
		RotatingMirror,
		StaticMirror,
		Proxy,
		TargetAssault,
		SanAndreasSuperSportCircuit,
		SeaSparrow,
		Caracara,
		NightclubProperty,
		CargoBusinessBattle,
		NightclubTruck,
		Jewel,
		Gold,
		Keypad,
		HackTarget,
		HealthHeart,
		BlastIncrease,
		BlastDecrease,
		BombIncrease,
		BombDecrease,
		Rival,
		Drone,
		CashRegister,
		CCTV2,
		TargetBusinessBattle,
		FestivalBus,
		Terrorbyte,
		Menacer,
		Scramjet,
		PounderCustom,
		MuleCustom,
		SpeedoCustom,
		Blimp2,
		OppressorMkII,
		B11StrikeForce,
		ArenaSeries,
		ArenaPremium,
		ArenaWorkshop,
		RaceArenaWar,
		ArenaTurret,
		RCVehicle,
		RCWorkshop,
		FirePit,
		Flipper,
		SeaMine,
		TurnTable,
		Pit,
		Mines,
		BarrelBomb,
		RisingWall,
		Bollards,
		SideBollard,
		Bruiser,
		Brutus,
		Cerberus,
		Deathbike,
		Dominator,
		Impaler,
		Imperator,
		Issi,
		Sasquatch,
		Scarab,
		Slamvam,
		ZR380
	};

	public ref class Blip sealed : System::IEquatable<Blip ^>, IHandleable
	{
	public:
		Blip(int handle);

		virtual property int Handle
		{
			int get();
		}
		property int Alpha
		{
			int get();
			void set(int alpha);
		}
		property BlipColor Color
		{
			BlipColor get();
			void set(BlipColor color);
		}
		property bool IsFlashing
		{
			bool get();
			void set(bool value);
		}
		property bool IsFriendly
		{
			void set(bool value);
		}
		property bool IsOnMinimap
		{
			bool get();
		}
		property bool IsShortRange
		{
			bool get();
			void set(bool value);
		}
		property System::String ^Name
		{
			void set(System::String ^value);
		}
		property Math::Vector3 Position
		{
			Math::Vector3 get();
			void set(Math::Vector3 value);
		}
		property int Rotation
		{
			void set(int value);
		}
		property float Scale
		{
			void set(float scale);
		}
		property bool ShowRoute
		{
			void set(bool value);
		}
		property BlipSprite Sprite
		{
			BlipSprite get();
			void set(BlipSprite sprite);
		}
		property int Type
		{
			int get();
		}

		void HideNumber();
		void ShowNumber(int number);

		void Remove();

		virtual bool Exists();
		static bool Exists(Blip ^blip);
		
		virtual bool Equals(System::Object ^obj) override;
		virtual bool Equals(Blip ^blip);

		virtual inline int GetHashCode() override
		{
			return Handle;
		}

		static inline bool operator==(Blip ^left, Blip ^right)
		{
			if (ReferenceEquals(left, nullptr))
			{
				return ReferenceEquals(right, nullptr);
			}

			return left->Equals(right);
		}
		static inline bool operator!=(Blip ^left, Blip ^right)
		{
			return !operator==(left, right);
		}

	private:
		int _handle;
	};
}