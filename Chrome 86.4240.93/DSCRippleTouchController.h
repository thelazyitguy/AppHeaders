//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/MDCRippleTouchController.h>

@class NSHashTable;
@protocol DSCRippleTouchControllerDelegate;

@interface DSCRippleTouchController : MDCRippleTouchController
{
    id <DSCRippleTouchControllerDelegate> _rippleDelegate;
    NSHashTable *_gestureRecognizersHandled;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *gestureRecognizersHandled; // @synthesize gestureRecognizersHandled=_gestureRecognizersHandled;
@property(nonatomic) __weak id <DSCRippleTouchControllerDelegate> rippleDelegate; // @synthesize rippleDelegate=_rippleDelegate;
- (void)handlePanGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithView:(id)arg1;

@end
