//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC4Argo18HTTPSessionManager : NSObject
{
    // Error parsing type: , name: defaultPriority
    // Error parsing type: , name: urlSession
    // Error parsing type: , name: responseType
}

+ (id)acceptableImageContentTypes;
- (void).cxx_destruct;
- (id)init;
- (id)downloadFromURLString:(id)arg1 parameters:(id)arg2 method:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)GET:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)invalidateSessionByCancelingTasks:(_Bool)arg1;
- (id)initWithBaseURL:(id)arg1 sessionConfiguration:(id)arg2 responseType:(unsigned long long)arg3;
@property(nonatomic) float defaultPriority; // @synthesize defaultPriority;

@end

