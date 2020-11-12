//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDCAppBar;
@protocol GTEThemerProvider><GTENavigationServiceProvider;

@interface GTEAppBarBuilder : NSObject
{
    NSObject<GTEThemerProvider><GTENavigationServiceProvider> *_appContext;
    MDCAppBar *_appBar;
    _Bool _hasLeadingTextButton;
    _Bool _hasTrailingTextButton;
    _Bool _hasLeadingImageButton;
    _Bool _hasTrailingImageButton;
}

- (void).cxx_destruct;
- (void)insertBarButtonItem:(id)arg1 atPosition:(long long)arg2;
- (id)installInViewController:(id)arg1 trackingScrollView:(id)arg2;
- (id)addImageButtonWithImage:(id)arg1 accessibilityLabel:(id)arg2 target:(id)arg3 action:(SEL)arg4 position:(long long)arg5;
- (id)addTextButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 position:(long long)arg4;
- (void)setTitle:(id)arg1 font:(id)arg2 alignment:(long long)arg3;
- (id)initWithAppContext:(id)arg1 showBackButton:(_Bool)arg2;

@end
