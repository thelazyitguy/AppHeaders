//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionViewCell.h>

#import "ObjectObserverProtocol-Protocol.h"
#import "PannableCellManagerDelegate-Protocol.h"

@class Comment, CommentSwipeView, CommentView, NSString, PannableCellManager;
@protocol CommentCellDelegate, ViewContext;

@interface CommentCell : BaseCollectionViewCell <PannableCellManagerDelegate, ObjectObserverProtocol>
{
    _Bool _isInModMode;
    _Bool _isInModQueue;
    _Bool _isPanningEnabled;
    CommentView *_commentView;
    Comment *_comment;
    id <CommentCellDelegate> _delegate;
    id <ViewContext> _viewContext;
    CommentSwipeView *_swipeView;
    PannableCellManager *_pannableCellManager;
}

+ (struct CGSize)calculatedSizeWithData:(id)arg1 viewContext:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) PannableCellManager *pannableCellManager; // @synthesize pannableCellManager=_pannableCellManager;
@property(retain, nonatomic) CommentSwipeView *swipeView; // @synthesize swipeView=_swipeView;
@property(retain, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(nonatomic) _Bool isPanningEnabled; // @synthesize isPanningEnabled=_isPanningEnabled;
@property(nonatomic) __weak id <CommentCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isInModQueue; // @synthesize isInModQueue=_isInModQueue;
@property(nonatomic) _Bool isInModMode; // @synthesize isInModMode=_isInModMode;
@property(retain, nonatomic) Comment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) CommentView *commentView; // @synthesize commentView=_commentView;
- (void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (_Bool)shouldCellPan;
- (unsigned long long)panCellStateForStateNum:(unsigned long long)arg1;
- (void)pannableCellManager:(id)arg1 didPanToIndex:(unsigned long long)arg2;
- (void)pannableCellManager:(id)arg1 changedToIndex:(unsigned long long)arg2;
- (void)configureWithData:(id)arg1 viewContext:(id)arg2 styling:(id)arg3 delegate:(id)arg4 shouldHighlightBackground:(_Bool)arg5 isInModMode:(_Bool)arg6 isInModQueue:(_Bool)arg7 isUserAModerator:(_Bool)arg8;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
