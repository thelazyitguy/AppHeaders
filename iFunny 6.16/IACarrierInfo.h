//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTCallCenter, NSMutableDictionary;

@interface IACarrierInfo : NSObject
{
    _Bool _updated;
    NSMutableDictionary *_carrierInfo;
    CTCallCenter *_callCenter;
}

+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CTCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property(retain, nonatomic) NSMutableDictionary *carrierInfo; // @synthesize carrierInfo=_carrierInfo;
@property(getter=isUpdated) _Bool updated; // @synthesize updated=_updated;
- (void)dealloc;
- (void)updateCarrierInfoForCTCarrier:(id)arg1;
- (id)mobileCountryCode;
- (id)isoCountryCode;
- (id)carrierInfoParams;
- (void)initCarrierInfo;
- (id)init;

@end
