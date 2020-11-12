//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CMRDockEvacuationLifetimeData : NSObject
{
    int _lastUpdateDate;
    int _totalEvacCount;
    int _totalEvacTime;
    int _totalDockingCount;
    int _totalMotorCount;
    int _evacCountSinceFull;
    NSString *_dockId;
    NSString *_dockVersion;
}

+ (id)DockEvacuationLifetimeDataWithDockId:(id)arg1 dockVersion:(id)arg2 lastUpdateDate:(int)arg3 totalEvacCount:(int)arg4 totalEvacTime:(int)arg5 totalDockingCount:(int)arg6 totalMotorCount:(int)arg7 evacCountSinceFull:(int)arg8;
- (void).cxx_destruct;
@property(readonly, nonatomic) int evacCountSinceFull; // @synthesize evacCountSinceFull=_evacCountSinceFull;
@property(readonly, nonatomic) int totalMotorCount; // @synthesize totalMotorCount=_totalMotorCount;
@property(readonly, nonatomic) int totalDockingCount; // @synthesize totalDockingCount=_totalDockingCount;
@property(readonly, nonatomic) int totalEvacTime; // @synthesize totalEvacTime=_totalEvacTime;
@property(readonly, nonatomic) int totalEvacCount; // @synthesize totalEvacCount=_totalEvacCount;
@property(readonly, nonatomic) int lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(readonly, nonatomic) NSString *dockVersion; // @synthesize dockVersion=_dockVersion;
@property(readonly, nonatomic) NSString *dockId; // @synthesize dockId=_dockId;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDockId:(id)arg1 dockVersion:(id)arg2 lastUpdateDate:(int)arg3 totalEvacCount:(int)arg4 totalEvacTime:(int)arg5 totalDockingCount:(int)arg6 totalMotorCount:(int)arg7 evacCountSinceFull:(int)arg8;

@end
