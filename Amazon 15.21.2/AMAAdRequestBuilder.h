//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMAAdIdentifiers, AMADebugProperties, AMAdConfiguration, AMUtility;

@interface AMAAdRequestBuilder : NSObject
{
    AMAAdIdentifiers *_adIdentifiers;
    AMAdConfiguration *_adConfiguration;
    AMADebugProperties *_debugProperties;
    AMUtility *_utility;
}

+ (id)adRequestBuilder;
@property(retain, nonatomic) AMUtility *utility; // @synthesize utility=_utility;
@property(retain, nonatomic) AMADebugProperties *debugProperties; // @synthesize debugProperties=_debugProperties;
@property(retain, nonatomic) AMAdConfiguration *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property(retain, nonatomic) AMAAdIdentifiers *adIdentifiers; // @synthesize adIdentifiers=_adIdentifiers;
- (void).cxx_destruct;
- (void)addAdvancedParametersFromOptions:(id)arg1 size:(id)arg2 containerSize:(id)arg3 toParameters:(id)arg4 forAd:(id)arg5;
- (id)commonParametersWithOptions:(id)arg1 directedIdFetcher:(id)arg2;
- (void)loadGDPRParams:(id)arg1;
- (id)adRequestWithOptions:(id)arg1 size:(id)arg2 containerSize:(id)arg3 forAd:(id)arg4 error:(id *)arg5;
- (id)adRequestWithOptions:(id)arg1 size:(id)arg2 forAd:(id)arg3 error:(id *)arg4;

@end
