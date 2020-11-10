//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTMainAppPlayerToastDisplayerDelegate-Protocol.h"

@class GIMMe, NSString, YTTimedAction;
@protocol YTMainAppPlayerToastControllerDelegate, YTMainAppPlayerToastDisplayer;

@interface YTMainAppPlayerToastController : NSObject <YTMainAppPlayerToastDisplayerDelegate>
{
    id <YTMainAppPlayerToastDisplayer> _toastDisplayer;
    NSString *_persistentToastText;
    NSString *_temporaryToastText;
    YTTimedAction *_clearTemporaryToastTimer;
    GIMMe *_gimme;
    id <YTMainAppPlayerToastControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTMainAppPlayerToastControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (_Bool)isDisplayingTemporaryToast;
- (void)toastDisplayer:(id)arg1 didChangeVisibility:(_Bool)arg2;
- (void)updatePlayerToast;
- (void)displayToastFromToastCommand:(id)arg1;
- (void)displayTemporaryToast:(id)arg1 duration:(double)arg2;
- (void)displayPersistentToast:(id)arg1;
- (void)setPlayerToastDisplayer:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

