//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BAMCheckout/BAMBaseServerTask.h>

@class BAMServerTaskImageConfiguration;

@interface BAMServerTaskImage : BAMBaseServerTask
{
}

- (id)cameraDeviceDetails;
- (id)createHTTPBody;
- (id)createURL;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(retain, nonatomic) BAMServerTaskImageConfiguration *configuration; // @dynamic configuration;
@property(nonatomic) unsigned long long contentType; // @dynamic contentType;
@property(nonatomic) unsigned long long httpMethod; // @dynamic httpMethod;

@end

