//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkResponseMappable-Protocol.h>

@interface FNROCustomPrefetchParams : NSObject <IFNetworkResponseMappable>
{
    long long _videoCost;
    long long _video1Cost;
    long long _imageCost;
    long long _badNetMaxCost;
    long long _goodNetMaxCost;
    long long _minBufferSizeBytes;
}

+ (id)objectMapping;
@property(nonatomic) long long minBufferSizeBytes; // @synthesize minBufferSizeBytes=_minBufferSizeBytes;
@property(nonatomic) long long goodNetMaxCost; // @synthesize goodNetMaxCost=_goodNetMaxCost;
@property(nonatomic) long long badNetMaxCost; // @synthesize badNetMaxCost=_badNetMaxCost;
@property(nonatomic) long long imageCost; // @synthesize imageCost=_imageCost;
@property(nonatomic) long long video1Cost; // @synthesize video1Cost=_video1Cost;
@property(nonatomic) long long videoCost; // @synthesize videoCost=_videoCost;

@end
