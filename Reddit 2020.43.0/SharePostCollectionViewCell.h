//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionViewCell.h>

@class FeedPostCrosspostView, LabeledTextField, NSLayoutConstraint, Post, TextFieldContentView;
@protocol ViewContext;

@interface SharePostCollectionViewCell : BaseCollectionViewCell
{
    id <ViewContext> _viewContext;
    Post *_post;
    FeedPostCrosspostView *_postView;
    TextFieldContentView *_textFieldView;
    NSLayoutConstraint *_postViewHeightConstraint;
}

+ (struct CGSize)calculatedSizeWithViewContext:(id)arg1 post:(id)arg2 options:(id)arg3 forWidth:(double)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *postViewHeightConstraint; // @synthesize postViewHeightConstraint=_postViewHeightConstraint;
@property(retain, nonatomic) TextFieldContentView *textFieldView; // @synthesize textFieldView=_textFieldView;
@property(retain, nonatomic) FeedPostCrosspostView *postView; // @synthesize postView=_postView;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(readonly, nonatomic) LabeledTextField *textField;
- (void)prepareForReuse;
- (void)configureWithViewContext:(id)arg1 post:(id)arg2 options:(id)arg3;
@property(readonly, nonatomic) Post *crosspost;
@property(readonly, nonatomic) Post *parentPost;
- (void)setupConstraints;
- (void)setupUI;

@end
