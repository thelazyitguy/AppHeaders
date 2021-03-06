//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/NSCopying-Protocol.h>
#import <NavigationFramework/NSSecureCoding-Protocol.h>

@interface GMSDViaPoint : NSObject <NSCopying, NSSecureCoding>
{
    int _latitudeE7;
    int _longitudeE7;
    long long _afterWaypointIndex;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long afterWaypointIndex; // @synthesize afterWaypointIndex=_afterWaypointIndex;
@property(readonly, nonatomic) int longitudeE7; // @synthesize longitudeE7=_longitudeE7;
@property(readonly, nonatomic) int latitudeE7; // @synthesize latitudeE7=_latitudeE7;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (struct GMSCoordinate)coordinate;
- (id)initWithLatitudeE7:(int)arg1 longitudeE7:(int)arg2 afterWaypointIndex:(long long)arg3;
- (id)initWithCoordinate:(struct GMSCoordinate)arg1 afterWaypointIndex:(long long)arg2;

@end

