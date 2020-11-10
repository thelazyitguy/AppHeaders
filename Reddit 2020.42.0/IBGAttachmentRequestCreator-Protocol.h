//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/NSObject-Protocol.h>

@class IBGLocalAttachment, IBGLogRequest, NSDictionary, NSString;
@protocol IBGLogRequestDelegate;

@protocol IBGAttachmentRequestCreator <NSObject>

@optional
- (void)reportAttachmentRequestWithParameters:(NSDictionary *)arg1 attachmentPath:(NSString *)arg2 reportId:(NSString *)arg3 localAttachment:(IBGLocalAttachment *)arg4;
- (IBGLogRequest *)logRequestWithId:(NSString *)arg1 parameters:(NSDictionary *)arg2 delegate:(id <IBGLogRequestDelegate>)arg3;
@end

