//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STPFormEncodable-Protocol.h"

@class NSDictionary, NSString, STPConnectAccountVerificationDocument;

@interface STPConnectAccountIndividualVerification : NSObject <STPFormEncodable>
{
    NSDictionary *additionalAPIParameters;
    STPConnectAccountVerificationDocument *_document;
}

+ (id)rootObjectName;
+ (id)propertyNamesToFormFieldNamesMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) STPConnectAccountVerificationDocument *document; // @synthesize document=_document;
@property(copy, nonatomic) NSDictionary *additionalAPIParameters; // @synthesize additionalAPIParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

