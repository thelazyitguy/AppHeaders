//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOSShared/SDModelObject.h>

@class NSString;

@interface WMPPaymentTransactionWarning : SDModelObject
{
    NSString *_clientTitle;
    NSString *_clientMessage;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *clientMessage; // @synthesize clientMessage=_clientMessage;
@property(copy, nonatomic) NSString *clientTitle; // @synthesize clientTitle=_clientTitle;
- (_Bool)validModel;
- (id)mappingDictionaryForData:(id)arg1;

@end
