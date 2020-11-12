//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCompactVideoCell.h>

@class NSString;
@protocol YTUploadTaskProtocol;

@interface YTPendingUploadCell : YTCompactVideoCell
{
    id <YTUploadTaskProtocol> _task;
    NSString *_frontendUploadID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *frontendUploadID; // @synthesize frontendUploadID=_frontendUploadID;
- (id)stringForTimeRemaining:(double)arg1;
- (void)updateCellStatus:(float)arg1 message:(id)arg2 timeRemaining:(double)arg3;
- (id)thumbnailMappings;
- (void)uploadProcessingDidProgressWithFrontendUploadID:(id)arg1 renderer:(id)arg2;
- (void)uploadDidProgressWithFrontendUploadID:(id)arg1 percentageUploaded:(float)arg2 timeRemaining:(double)arg3;
- (void)transcodeDidProgressWithFrontendUploadID:(id)arg1 percentageTranscoded:(float)arg2;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
