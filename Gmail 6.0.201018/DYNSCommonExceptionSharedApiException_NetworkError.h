//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangEnum.h"

#import "DYNSCommonExceptionSharedApiException_ErrorType-Protocol.h"
#import "DYNSharedApiExceptionNetworkError-Protocol.h"

@class NSString;

@interface DYNSCommonExceptionSharedApiException_NetworkError : JavaLangEnum <DYNSharedApiExceptionNetworkError, DYNSCommonExceptionSharedApiException_ErrorType>
{
}

+ (void)initialize;
+ (id)values;
- (unsigned long long)toNSEnum;
- (id)getCategory;
- (unsigned int)category;
- (unsigned int)exceptionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
