//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFContentPublishSettingChangeService-Protocol.h>

@class IFNetworkService;

@interface IFContentPublishSettingChangeServiceImpl : NSObject <IFContentPublishSettingChangeService>
{
    IFNetworkService *_networkService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IFNetworkService *networkService; // @synthesize networkService=_networkService;
- (void)updateContentDescriptionForContentId:(id)arg1 contentDescription:(id)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)saveWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initWithNetworkService:(id)arg1;

@end
