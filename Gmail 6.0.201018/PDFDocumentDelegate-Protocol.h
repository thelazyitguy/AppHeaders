//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNotification, NSString, PDFSelection;

@protocol PDFDocumentDelegate <NSObject>

@optional
- (Class)classForAnnotationType:(NSString *)arg1;
- (Class)classForPage;
- (void)didMatchString:(PDFSelection *)arg1;
- (void)documentDidFindMatch:(NSNotification *)arg1;
- (void)documentDidEndPageFind:(NSNotification *)arg1;
- (void)documentDidBeginPageFind:(NSNotification *)arg1;
- (void)documentDidEndDocumentFind:(NSNotification *)arg1;
- (void)documentDidBeginDocumentFind:(NSNotification *)arg1;
- (void)documentDidUnlock:(NSNotification *)arg1;
@end
