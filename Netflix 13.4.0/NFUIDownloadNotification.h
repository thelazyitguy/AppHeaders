//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface NFUIDownloadNotification : NSObject
{
    _Bool _hasHiddenEpisodeNumbers;
    NSString *_showTitle;
    NSString *_seasonSequenceLabel;
    NSNumber *_episodeNumber;
    long long _downloadCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long downloadCount; // @synthesize downloadCount=_downloadCount;
@property(retain, nonatomic) NSNumber *episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(retain, nonatomic) NSString *seasonSequenceLabel; // @synthesize seasonSequenceLabel=_seasonSequenceLabel;
@property(nonatomic) _Bool hasHiddenEpisodeNumbers; // @synthesize hasHiddenEpisodeNumbers=_hasHiddenEpisodeNumbers;
@property(retain, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
- (void)dispatchRequestWithContent:(id)arg1;
- (id)notificationContentWithTitle:(id)arg1 contentString:(id)arg2;
- (id)finishedContentStringForShowTitle:(id)arg1 downloadCount:(long long)arg2;
- (id)finishedContentStringForShowTitle:(id)arg1 seasonSequenceLabel:(id)arg2 episodeNumber:(id)arg3 downloadCount:(long long)arg4;
- (id)contentStringForShowTitle:(id)arg1 downloadCount:(long long)arg2;
- (id)contentStringForShowTitle:(id)arg1 seasonSequenceLabel:(id)arg2 episodeNumber:(id)arg3 downloadCount:(long long)arg4;
- (id)notificationContentForDownloadFinished;
- (id)notificationContentForDownloadStarted;
- (void)showNotificationForDownloadFinished;
- (void)showNotificationForDownloadStarted;
- (id)initWithShowTitle:(id)arg1 hasHiddenEpisodeNumbers:(_Bool)arg2 seasonSequenceLabel:(id)arg3 episodeNumber:(id)arg4 downloadCount:(long long)arg5;
- (void)showAlertWithTitle:(id)arg1 body:(id)arg2;
- (void)showLocalAlertForDownloadFinishedWithShowTitle:(id)arg1 hasHiddenEpisodeNumbers:(_Bool)arg2 seasonSequenceLabel:(id)arg3 episodeNumber:(id)arg4 downloadCount:(long long)arg5;
- (void)showLocalAlertForDownloadStartedWithShowTitle:(id)arg1 hasHiddenEpisodeNumbers:(_Bool)arg2 seasonSequenceLabel:(id)arg3 episodeNumber:(id)arg4 downloadCount:(long long)arg5;

@end

