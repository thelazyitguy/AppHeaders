//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GOOModalWindowViewController, UIWindow;

@interface GOOModalWindowController : NSObject
{
    UIWindow *_displacedKeyWindow;
    UIWindow *_window;
    GOOModalWindowViewController *_modalViewController;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(retain, nonatomic) GOOModalWindowViewController *modalViewController; // @synthesize modalViewController=_modalViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIWindow *displacedKeyWindow; // @synthesize displacedKeyWindow=_displacedKeyWindow;
- (void)windowDidResignKeyWindow:(id)arg1;
- (void)windowDidBecomeKeyWindow:(id)arg1;
- (void)setModalViewStackHidden:(_Bool)arg1;
- (id)modalViewStack;
- (void)dismissModal:(id)arg1 withAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModal:(id)arg1;
- (id)init;

@end

