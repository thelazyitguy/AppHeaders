//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeRequestService.h>

@class GIMMe, YTApiaryResourceParser;

@interface YTPersonaService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_editPersonaResponseParser;
    YTApiaryResourceParser *_getPersonaResponseParser;
    YTApiaryResourceParser *_deletePersonaResponseParser;
    YTApiaryResourceParser *_listPersonasResponseParser;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)makeListPersonasRequestWithIdentityID:(id)arg1 clickTrackingParams:(id)arg2 personaVersion:(id)arg3 innerTubeResponseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)makeDeletePersonaRequestWithIdentityID:(id)arg1 personaID:(id)arg2 clickTrackingParams:(id)arg3 innerTubeResponseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)makeGetPersonaRequestWithIdentityID:(id)arg1 personaID:(id)arg2 personaVersion:(id)arg3 clickTrackingParams:(id)arg4 innerTubeResponseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)makeEditPersonaRequestWithIdentityID:(id)arg1 givenName:(id)arg2 birthday:(id)arg3 avatar:(id)arg4 personaID:(id)arg5 clickTrackingParams:(id)arg6 innerTubeResponseBlock:(CDUnknownBlockType)arg7 errorBlock:(CDUnknownBlockType)arg8;
- (id)init;

@end

