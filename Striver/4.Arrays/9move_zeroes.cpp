// with extra scpace

// int n=nums.size();
        // int arr[n];
        // int j=0;
        // for(int i=0;i<n;i++)
        // {
        //     arr[i]=0;
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]!=0)
        //     {
        //         arr[j]=nums[i];
        //         j++;
        //     }
        // }

        // for(int i=0;i<n;i++)
        // {
        //     nums[i]=0;
        // }

        // for(int i=0;i<n;i++)
        // {
        //     nums[i]=arr[i];
        // }


        // =============================================================
        // withour spacr
         int n=nums.size();
        int j=-1;
       
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                j=i;
                break;
            }
        }

        for(int i=j+1;i<n;i++)
        {
            if(nums[i]!=0)
            {
                int temp = nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                j++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(j==-1)
            {
                cout<<nums[i];
            }
        }