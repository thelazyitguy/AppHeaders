//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, NSURL, UIImage;

@protocol DYNFilePickerDelegate <NSObject>
- (void)filePickerDidCancel;
- (void)filePickerDidPickVideoWithURL:(NSURL *)arg1 fileName:(NSString *)arg2 withThumbnail:(UIImage *)arg3;
- (void)filePickerDidPickImage:(UIImage *)arg1 imageData:(NSData *)arg2 utType:(NSString *)arg3 fileName:(NSString *)arg4;
@end
