//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/ASMPassThroughBlockView.h>

#import <ChromeInternal/ASMNavigationInitiator-Protocol.h>

@class ASMInkTouchController, ASMProfilePictureBlock, ASMProfilePictureLoadingView, ASMStyledTextListView, UIImageView;

@interface ASMProfilePictureBlockView : ASMPassThroughBlockView <ASMNavigationInitiator>
{
    CDUnknownBlockType _navigateTo;
    ASMProfilePictureBlock *_block;
    ASMStyledTextListView *_textListView;
    UIImageView *_avatarImageView;
    UIImageView *_editImageView;
    ASMInkTouchController *_inkTouchController;
    ASMProfilePictureLoadingView *_profilePictureLoadingView;
}

+ (id)viewWithBlock:(id)arg1 profilePicture:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ASMProfilePictureLoadingView *profilePictureLoadingView; // @synthesize profilePictureLoadingView=_profilePictureLoadingView;
@property(retain, nonatomic) ASMInkTouchController *inkTouchController; // @synthesize inkTouchController=_inkTouchController;
@property(retain, nonatomic) UIImageView *editImageView; // @synthesize editImageView=_editImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) ASMStyledTextListView *textListView; // @synthesize textListView=_textListView;
@property(retain, nonatomic) ASMProfilePictureBlock *block; // @synthesize block=_block;
@property(copy, nonatomic) CDUnknownBlockType navigateTo; // @synthesize navigateTo=_navigateTo;
- (void)showLoadingState:(id)arg1;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)didTapProfilePicture;
- (void)addSubviewConstraints;
- (id)textEntriesFromBlock:(id)arg1;
- (void)updateWithBlock:(id)arg1 profilePicture:(id)arg2;
- (id)initWithBlock:(id)arg1 profilePicture:(id)arg2;

@end
