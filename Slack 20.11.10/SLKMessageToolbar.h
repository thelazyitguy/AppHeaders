//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SLKDependencies;
@protocol SLKMessageFooterDelegate;

@interface SLKMessageToolbar : UIView
{
    id <SLKMessageFooterDelegate> _delegate;
    unsigned long long _replyCount;
    SLKDependencies *_dependencies;
    unsigned long long _style;
}

+ (id)localizedLabelForRepliesCount:(unsigned long long)arg1;
+ (double)heightWithBottomPadding:(double)arg1;
+ (double)height;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak SLKDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(nonatomic) unsigned long long replyCount; // @synthesize replyCount=_replyCount;
@property(nonatomic) __weak id <SLKMessageFooterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapButton:(id)arg1;
- (void)prepareItemsForLayout;
- (void)setItem:(unsigned long long)arg1 hidden:(_Bool)arg2;
- (void)setItem:(unsigned long long)arg1 enabled:(_Bool)arg2;
- (void)setItem:(unsigned long long)arg1 selected:(_Bool)arg2;
- (void)setReplyCount:(unsigned long long)arg1 hideText:(_Bool)arg2;
- (void)setFileReplyCount:(unsigned long long)arg1;
- (id)itemButtons;
- (id)localizedLabelForItem:(unsigned long long)arg1 selected:(_Bool)arg2;
- (id)buttonColorForItem:(unsigned long long)arg1 selected:(_Bool)arg2;
- (id)buttonImageForItem:(unsigned long long)arg1 selected:(_Bool)arg2;
- (id)newHairlineView:(_Bool)arg1;
- (id)iconTextForItem:(unsigned long long)arg1;
- (id)newModernButtonForItem:(unsigned long long)arg1;
- (id)newButtonForItem:(unsigned long long)arg1;
- (id)initWithDependencies:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithDependencies:(id)arg1;

@end
