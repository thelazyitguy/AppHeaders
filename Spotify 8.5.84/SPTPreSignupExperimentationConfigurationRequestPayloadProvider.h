//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTPreSignupExperimentationConnectionTypeProvider, SPTPreSignupExperimentationISO8601FormattedDateProvider;

@interface SPTPreSignupExperimentationConfigurationRequestPayloadProvider : NSObject
{
    SPTPreSignupExperimentationConnectionTypeProvider *_connectionTypeProvider;
    SPTPreSignupExperimentationISO8601FormattedDateProvider *_formattedDateProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTPreSignupExperimentationISO8601FormattedDateProvider *formattedDateProvider; // @synthesize formattedDateProvider=_formattedDateProvider;
@property(readonly, nonatomic) SPTPreSignupExperimentationConnectionTypeProvider *connectionTypeProvider; // @synthesize connectionTypeProvider=_connectionTypeProvider;
- (id)configurationRequestData;
- (id)initWithConnectionTypeProvider:(id)arg1 formattedDateProvider:(id)arg2;

@end

