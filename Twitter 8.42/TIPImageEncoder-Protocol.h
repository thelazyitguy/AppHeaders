//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSData, NSString, TIPImageContainer;

@protocol TIPImageEncoder <NSObject>
- (NSData *)tip_writeDataWithImage:(TIPImageContainer *)arg1 encodingOptions:(long long)arg2 suggestedQuality:(float)arg3 error:(out id *)arg4;

@optional
- (_Bool)tip_writeToFile:(NSString *)arg1 withImage:(TIPImageContainer *)arg2 encodingOptions:(long long)arg3 suggestedQuality:(float)arg4 atomically:(_Bool)arg5 error:(out id *)arg6;
@end

