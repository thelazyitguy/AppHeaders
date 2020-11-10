//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString;

@protocol YTUploadMetadataProtocol <NSObject>
@property(readonly, nonatomic) NSString *placeDescription;
@property(readonly, nonatomic) NSString *placeId;
@property(readonly, nonatomic) NSNumber *privacy;
@property(readonly, nonatomic) NSArray *videoTags;
@property(readonly, nonatomic) NSString *videoDescription;
@property(readonly, nonatomic) NSString *videoTitle;
- (id)initWithTitle:(NSString *)arg1 description:(NSString *)arg2 videoTags:(NSArray *)arg3 privacy:(NSNumber *)arg4 placeId:(NSString *)arg5 placeDescription:(NSString *)arg6;
@end

