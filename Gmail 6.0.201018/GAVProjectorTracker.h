//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVBaseTracker.h"

@interface GAVProjectorTracker : GAVBaseTracker
{
}

+ (id)contextProtoFromUIState:(id)arg1;
- (void)trackFABTappedWithFileInfo:(id)arg1;
- (void)trackPasswordPromptSubmitActionWithFileInfo:(id)arg1;
- (void)trackRotateScreenWithFileInfo:(id)arg1;
- (void)trackHyperlinkClickWithFileInfo:(id)arg1;
- (void)trackLongPressToSaveWithFileInfo:(id)arg1;
- (void)trackExitProjector;
- (void)trackViewerSwipedWithFileInfo:(id)arg1;
- (void)trackViewerErrorWithFileInfo:(id)arg1 error:(id)arg2;
- (void)trackFileFullyLoadedWithFileInfo:(id)arg1;
- (void)trackFileLoadCancelledWithIdentifier:(id)arg1;
- (void)trackFileLoadStartedWithIdentifier:(id)arg1;
- (void)trackFileInitWithFileInfo:(id)arg1 uiState:(id)arg2;
- (void)dealloc;
- (id)initWithHostApp:(unsigned long long)arg1 identity:(id)arg2;

@end
