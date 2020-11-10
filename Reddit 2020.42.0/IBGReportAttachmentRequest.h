//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGNetworkRequest.h>

@class IBGFileNetworkRequestCreator, NSDictionary, NSString;
@protocol IBGReportAttachmentRequestDelegate;

@interface IBGReportAttachmentRequest : IBGNetworkRequest
{
    _Bool _isExecuting;
    id <IBGReportAttachmentRequestDelegate> _delegate;
    NSDictionary *_dataParameters;
    NSString *_attachmentURL;
    NSString *_attachmentPath;
    IBGFileNetworkRequestCreator *_fileRequest;
}

@property(retain, nonatomic) IBGFileNetworkRequestCreator *fileRequest; // @synthesize fileRequest=_fileRequest;
@property(retain, nonatomic) NSString *attachmentPath; // @synthesize attachmentPath=_attachmentPath;
@property(retain, nonatomic) NSString *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
@property(retain, nonatomic) NSDictionary *dataParameters; // @synthesize dataParameters=_dataParameters;
@property(nonatomic) __weak id <IBGReportAttachmentRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isExecuting;
- (void).cxx_destruct;
- (void)networkDone:(id)arg1 URLSessionDataTask:(id)arg2 response:(id)arg3 error:(id)arg4 responseDictionary:(id)arg5;
- (id)requestCreator;
- (id)initWithParameters:(id)arg1 attachmentPath:(id)arg2 reportID:(id)arg3 delegate:(id)arg4;

@end

