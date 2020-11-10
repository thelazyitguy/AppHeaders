//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGNetworkRequest.h>

@class NSString;
@protocol IBGSDKVersionRequestDelegate;

@interface IBGSDKVersionRequest : IBGNetworkRequest
{
    NSString *_dataUrl;
    id <IBGSDKVersionRequestDelegate> _delegate;
}

@property(nonatomic) __weak id <IBGSDKVersionRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
- (void).cxx_destruct;
- (void)networkDone:(id)arg1 URLSessionDataTask:(id)arg2 response:(id)arg3 error:(id)arg4 responseDictionary:(id)arg5;
- (id)requestCreator;
- (id)initWithDelegate:(id)arg1;

@end

