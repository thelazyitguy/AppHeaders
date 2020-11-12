//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

#import "DYNContentViewObject-Protocol.h"

@class NSString;
@protocol DYNContentViewObjectActionDelegate, DYNRoomHeaderContentViewDelegate, GILVisualElementParams;

@interface DYNRoomHeaderContentViewObject : GOOBaseContentViewObject <DYNContentViewObject>
{
    _Bool _creatorIsCurrentUser;
    _Bool _showInviteButton;
    NSString *_creatorName;
    NSString *_creatorId;
    NSString *_timestampText;
    id <DYNRoomHeaderContentViewDelegate> _headerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DYNRoomHeaderContentViewDelegate> headerDelegate; // @synthesize headerDelegate=_headerDelegate;
@property(nonatomic) _Bool showInviteButton; // @synthesize showInviteButton=_showInviteButton;
@property(nonatomic) _Bool creatorIsCurrentUser; // @synthesize creatorIsCurrentUser=_creatorIsCurrentUser;
@property(retain, nonatomic) NSString *timestampText; // @synthesize timestampText=_timestampText;
@property(retain, nonatomic) NSString *creatorId; // @synthesize creatorId=_creatorId;
@property(retain, nonatomic) NSString *creatorName; // @synthesize creatorName=_creatorName;
- (_Bool)shouldShowInkView;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(retain, nonatomic) Class contentViewClass;

// Remaining properties
@property(nonatomic) __weak id <DYNContentViewObjectActionDelegate> actionDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) int visualElementID;
@property(retain, nonatomic) id <GILVisualElementParams> visualElementParams;

@end
