//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNLeadingFlowViewCellObject-Protocol.h"

@class NSString;
@protocol DYNReaction, DYNReactionViewDelegate;

@interface DYNReactionCellObject : NSObject <DYNLeadingFlowViewCellObject>
{
    id <DYNReaction> _reaction;
    id <DYNReactionViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <DYNReactionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <DYNReaction> reaction; // @synthesize reaction=_reaction;
- (Class)cellClass;
- (id)initWithReaction:(id)arg1 reactionDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

