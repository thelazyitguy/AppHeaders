//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GOOGRTCEncodedImage, NSString;
@protocol GOOGRTCCodecSpecificInfo;

@protocol GOOGRTCVideoDecoder <NSObject>
- (NSString *)implementationName;
- (long long)decode:(GOOGRTCEncodedImage *)arg1 missingFrames:(_Bool)arg2 codecSpecificInfo:(id <GOOGRTCCodecSpecificInfo>)arg3 renderTimeMs:(long long)arg4;
- (long long)releaseDecoder;
- (long long)startDecodeWithNumberOfCores:(int)arg1;
- (void)setCallback:(void (^)(GOOGRTCVideoFrame *))arg1;
@end
