//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YTICommand, YTISfvAudioItemSelectCommand_AudioItemDisplayData, YTShortsAudioPickerViewController;

@protocol YTShortsAudioPickerViewControllerDelegate <NSObject>
- (void)audioPickerViewController:(YTShortsAudioPickerViewController *)arg1 requestDismissalWithNavigationCommand:(YTICommand *)arg2 didSelectTrack:(_Bool)arg3;
- (void)audioPickerViewController:(YTShortsAudioPickerViewController *)arg1 didSelectVideoWithID:(NSString *)arg2 audioItemDisplayData:(YTISfvAudioItemSelectCommand_AudioItemDisplayData *)arg3 timeRange:(CDStruct_e83c9415)arg4 playerParams:(NSString *)arg5;
@end
