//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;
@protocol UIDropSession;

@protocol HtmlEditorDelegate <NSObject>
- (void)requestViewUrl:(NSURL *)arg1;
- (void)onEvent:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)editorDidAddNewDropSession:(id <UIDropSession>)arg1;
- (void)editorReady;
@end

