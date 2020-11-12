//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/BDMAdUnit.h>

#import <Funny/BDMPlacementAdUnit-Protocol.h>

@class NSDictionary, NSString;

@interface BDMAdUnitExtended : BDMAdUnit <BDMPlacementAdUnit>
{
    NSString *_bidderSdkVersion;
    NSString *_bidder;
    NSDictionary *_clientParams;
}

@property(copy, nonatomic) NSDictionary *clientParams; // @synthesize clientParams=_clientParams;
@property(copy, nonatomic) NSString *bidder; // @synthesize bidder=_bidder;
@property(copy, nonatomic) NSString *bidderSdkVersion; // @synthesize bidderSdkVersion=_bidderSdkVersion;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long format;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
