//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGNetworkRequest.h>

@class NSMutableDictionary, NSString;
@protocol IBGAddFeatureRequestDelegate;

@interface IBGAddFeatureRequest : IBGNetworkRequest
{
    id <IBGAddFeatureRequestDelegate> _delegate;
    NSString *_dataUrl;
    NSString *_name;
    NSString *_email;
    NSMutableDictionary *_featureDict;
}

@property(retain, nonatomic) NSMutableDictionary *featureDict; // @synthesize featureDict=_featureDict;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(nonatomic) __weak id <IBGAddFeatureRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)networkDone:(id)arg1 URLSessionDataTask:(id)arg2 response:(id)arg3 error:(id)arg4 responseDictionary:(id)arg5;
- (id)getParameters;
- (id)requestCreator;
- (id)initWithDelegate:(id)arg1 title:(id)arg2 description:(id)arg3 creatorName:(id)arg4 creatorEmail:(id)arg5;

@end

