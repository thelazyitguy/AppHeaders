//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkResponseMappable-Protocol.h>

@interface FNROFeediFunnyEstimatorParams : NSObject <IFNetworkResponseMappable>
{
    long long _first_look;
    long long _first_rate;
    long long _second_look;
    long long _second_rate;
}

+ (id)objectMapping;
@property(nonatomic) long long second_rate; // @synthesize second_rate=_second_rate;
@property(nonatomic) long long second_look; // @synthesize second_look=_second_look;
@property(nonatomic) long long first_rate; // @synthesize first_rate=_first_rate;
@property(nonatomic) long long first_look; // @synthesize first_look=_first_look;

@end
