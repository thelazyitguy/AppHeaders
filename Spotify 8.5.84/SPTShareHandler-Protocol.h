//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, SPTShareAlertModel, SPTShareData, SPTSharePresenter;
@protocol SPTShareDestination, SPTSharingSDKDeeplinkHandler;

@protocol SPTShareHandler <NSObject>
@property(readonly, nonatomic) NSString *utmContent;
@property(readonly, nonatomic) NSString *utmTerm;
@property(readonly, nonatomic) NSString *utmCampaign;
@property(readonly, nonatomic) NSString *utmMedium;
@property(readonly, copy, nonatomic) NSString *utmSource;
- (SPTShareAlertModel *)provideShareAlertModelForError:(NSError *)arg1;
- (void)shareWithData:(SPTShareData *)arg1 shareDestination:(id <SPTShareDestination>)arg2 sharePresenter:(SPTSharePresenter *)arg3 deeplinkHandler:(id <SPTSharingSDKDeeplinkHandler>)arg4 completion:(void (^)(NSError *, id <SPTShareHandlerCompletionData>))arg5;
@end
