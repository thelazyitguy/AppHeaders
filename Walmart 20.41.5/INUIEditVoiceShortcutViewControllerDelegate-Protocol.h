//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/NSObject-Protocol.h>

@class INUIEditVoiceShortcutViewController, INVoiceShortcut, NSError, NSUUID;

@protocol INUIEditVoiceShortcutViewControllerDelegate <NSObject>
- (void)editVoiceShortcutViewControllerDidCancel:(INUIEditVoiceShortcutViewController *)arg1;
- (void)editVoiceShortcutViewController:(INUIEditVoiceShortcutViewController *)arg1 didDeleteVoiceShortcutWithIdentifier:(NSUUID *)arg2;
- (void)editVoiceShortcutViewController:(INUIEditVoiceShortcutViewController *)arg1 didUpdateVoiceShortcut:(INVoiceShortcut *)arg2 error:(NSError *)arg3;
@end
