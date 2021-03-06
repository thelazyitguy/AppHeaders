//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNTLDRCVOProvider-Protocol.h"
#import "DYNTLDRDelegate-Protocol.h"

@class DYNTLDRContentViewObject, NSArray, NSString;
@protocol DYNTLDCVOProviderDelegate, GIPAccountID;

@interface DYNTLDRCVOProviderImpl : NSObject <DYNTLDRDelegate, DYNTLDRCVOProvider>
{
    id <GIPAccountID> _accountID;
    NSArray *_topicProviders;
    _Bool _isICYMI;
    DYNTLDRContentViewObject *_tldrObject;
    id <DYNTLDCVOProviderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DYNTLDCVOProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)bottomBorderCVOWithTopicID:(id)arg1;
- (id)topBorderCVOWithTopicID:(id)arg1;
- (id)spacerCVO;
- (id)tldrCVODataForTopicProvider:(id)arg1;
- (void)summaryRetrievedForTLDRObject:(id)arg1;
- (id)tldrObjectWrappedCVOs;
- (id)contentViewObjects;
- (id)initWithAccountID:(id)arg1 topicProviders:(id)arg2 isICYMI:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

