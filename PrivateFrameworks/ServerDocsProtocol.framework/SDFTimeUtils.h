/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface SDFTimeUtils : NSObject

+ (void)setTimeSpec:(struct timespec { long long x1; long long x2; }*)arg1 withDate:(id)arg2;
+ (void)setTimeSpec:(struct timespec { long long x1; long long x2; }*)arg1 withTimeVal:(struct timeval { long long x1; int x2; }*)arg2;
+ (void)setTimeVal:(struct timeval { long long x1; int x2; }*)arg1 withDate:(id)arg2;
+ (void)setTimeVal:(struct timeval { long long x1; int x2; }*)arg1 withTimeSpec:(struct timespec { long long x1; long long x2; }*)arg2;
+ (double)timeIntervalWithTimeSpec:(struct timespec { long long x1; long long x2; }*)arg1;
+ (double)timeIntervalWithTimeVal:(struct timeval { long long x1; int x2; }*)arg1;

@end
