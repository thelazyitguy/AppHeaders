//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/NSCopying-Protocol.h>
#import <NavigationFramework/NSMutableCopying-Protocol.h>

@class NSArray;

@interface GMSNavigationRoutingOptions : NSObject <NSCopying, NSMutableCopying>
{
    long long _routingStrategy;
    long long _alternateRoutesStrategy;
    NSArray *_targetDistancesMeters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *targetDistancesMeters; // @synthesize targetDistancesMeters=_targetDistancesMeters;
@property(nonatomic) long long alternateRoutesStrategy; // @synthesize alternateRoutesStrategy=_alternateRoutesStrategy;
@property(nonatomic) long long routingStrategy; // @synthesize routingStrategy=_routingStrategy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTargetDistancesMeters:(id)arg1;
- (id)initWithAlternateRoutesStrategy:(long long)arg1;
- (id)initWithRoutingStrategy:(long long)arg1;
- (id)init;
- (id)initWithRoutingStrategy:(long long)arg1 alternateRoutesStrategy:(long long)arg2 targetDistancesMeters:(id)arg3;

@end
