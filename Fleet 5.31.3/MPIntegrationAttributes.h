//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <mParticle_Apple_SDK/MPDataModelAbstract.h>

#import <mParticle_Apple_SDK/MPDataModelProtocol-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface MPIntegrationAttributes : MPDataModelAbstract <MPDataModelProtocol>
{
    NSNumber *_integrationId;
    NSDictionary *_attributes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSNumber *integrationId; // @synthesize integrationId=_integrationId;
- (id)serializedString;
- (id)dictionaryRepresentation;
- (id)initWithIntegrationId:(id)arg1 attributesData:(id)arg2;
- (id)initWithIntegrationId:(id)arg1 attributes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
