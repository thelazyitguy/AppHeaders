//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class Post, UIImage;
@protocol AccountContext;

@interface SaveImageActivity : UIActivity
{
    id <AccountContext> _accountContext;
    UIImage *_image;
    Post *_post;
}

+ (long long)activityCategory;
+ (id)activityType;
- (void).cxx_destruct;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)processAndSaveImage:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithAccountContext:(id)arg1;

@end
