//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSDictionary;

@interface TFSTwitterAPICardsCreateCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    NSDictionary *_cardData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *cardData; // @synthesize cardData=_cardData;
- (_Bool)shouldEndNetworkTransactionMetrics;
- (id)request;
- (id)initWithAccountID:(id)arg1 cardData:(id)arg2 context:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 responseModelBuilder:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;

@end

