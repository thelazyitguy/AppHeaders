//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTGoTo-Protocol.h"

@class ComGoogleAppsBigtopServicesCommonUtilsCachedValue, JBTIActionsHelper, JBTISmartMailComponentContextImpl, JCSAssignedId, JCSGoTo, NSString;

@interface JBTIGoToImpl : NSObject <JBTGoTo>
{
    JCSGoTo *goToProto_;
    ComGoogleAppsBigtopServicesCommonUtilsCachedValue *cachedIconType_;
    JBTISmartMailComponentContextImpl *smartMailContext_;
    JCSAssignedId *thingAssignedId_;
    JBTIActionsHelper *actionsHelper_;
}

- (void)dealloc;
- (id)getUserLocationType;
- (id)getSource;
- (id)getContext;
- (_Bool)hasUserLocationType;
- (void)recordClick;
- (_Bool)canMarkAsClicked;
- (id)getDetail;
- (_Bool)hasDetail;
- (id)getText;
- (_Bool)isClicked;
- (_Bool)isAmpUrl;
- (id)getGoToUrl;
- (id)getIconType;
- (id)getLoggingId;
- (id)getActionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
